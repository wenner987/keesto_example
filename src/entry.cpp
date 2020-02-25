//
// Created by Wenner on 2020/2/6.
//

#include "headers/HttpRequest.h"
#include "headers/HttpResponse.h"
#include "headers/HttpString.h"

#define TEST(str) \


extern "C"{
    void fffget_url(HttpRequest* request, HttpResponse* response){
        response->set_body(request->get_url().c_str());
    }
    void get_cookie(HttpRequest* request, HttpResponse* response){
        response->set_body(request->get_cookie("test")->c_str());
    }
    void tmp(HttpRequest *request, HttpResponse *response) {
        response->set_body("你好");
        qDebug() << __LINE__ << __FILE__ << "6r66";
    }
}
