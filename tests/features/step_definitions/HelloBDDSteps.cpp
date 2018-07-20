#include <gtest/gtest.h>
#include <cucumber-cpp/autodetect.hpp>
#include <Hello.h>

using cucumber::ScenarioScope;

struct HelloCtx {
  Hello *ptrHello;
  string actualResponse;
};

GIVEN("^an instance of Hello class is created$") {
  ScenarioScope<HelloCtx> context;

  context->ptrHello = new Hello();
}

WHEN("^the sayHello method is invoked$") {
  ScenarioScope<HelloCtx> context;

  context->actualResponse = context->ptrHello->sayHello();
}

THEN("^it should return \"Hello BDD!\"$") {
  ScenarioScope<HelloCtx> context;
  string expectedResponse = "Hello BDD!";

  EXPECT_EQ(expectedResponse, context->actualResponse);
}
