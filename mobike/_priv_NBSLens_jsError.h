//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _priv_NBSLens_jsError : NSObject
{
    _Bool _isLoading;
    double _OFFSET_TIMESTAMP;
    double _TIMESTAMP;
    double _PAGE_START_TIME_IN_SEC;
    NSString *_PV_ID;
    NSString *_PAGE_URL;
    NSString *_ERROR_TYPE_NAME;
    NSString *_ERROR_MESSAGE;
    long long _LINE_OF_ERROR;
    long long _COLUMN_OF_ERROR;
    NSString *_FILENAME_OF_ERROR;
    NSString *_STACK;
    long long _JS_ERROR_COUNT;
    long long _IS_FIRST_JS_ERROR;
    NSString *_CND_VENDOR_NAME;
    NSString *_key;
}

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSString *CND_VENDOR_NAME; // @synthesize CND_VENDOR_NAME=_CND_VENDOR_NAME;
@property(nonatomic) long long IS_FIRST_JS_ERROR; // @synthesize IS_FIRST_JS_ERROR=_IS_FIRST_JS_ERROR;
@property(nonatomic) long long JS_ERROR_COUNT; // @synthesize JS_ERROR_COUNT=_JS_ERROR_COUNT;
@property(copy, nonatomic) NSString *STACK; // @synthesize STACK=_STACK;
@property(copy, nonatomic) NSString *FILENAME_OF_ERROR; // @synthesize FILENAME_OF_ERROR=_FILENAME_OF_ERROR;
@property(nonatomic) long long COLUMN_OF_ERROR; // @synthesize COLUMN_OF_ERROR=_COLUMN_OF_ERROR;
@property(nonatomic) long long LINE_OF_ERROR; // @synthesize LINE_OF_ERROR=_LINE_OF_ERROR;
@property(copy, nonatomic) NSString *ERROR_MESSAGE; // @synthesize ERROR_MESSAGE=_ERROR_MESSAGE;
@property(copy, nonatomic) NSString *ERROR_TYPE_NAME; // @synthesize ERROR_TYPE_NAME=_ERROR_TYPE_NAME;
@property(copy, nonatomic) NSString *PAGE_URL; // @synthesize PAGE_URL=_PAGE_URL;
@property(copy, nonatomic) NSString *PV_ID; // @synthesize PV_ID=_PV_ID;
@property(nonatomic) double PAGE_START_TIME_IN_SEC; // @synthesize PAGE_START_TIME_IN_SEC=_PAGE_START_TIME_IN_SEC;
@property(nonatomic) double TIMESTAMP; // @synthesize TIMESTAMP=_TIMESTAMP;
@property(nonatomic) double OFFSET_TIMESTAMP; // @synthesize OFFSET_TIMESTAMP=_OFFSET_TIMESTAMP;
- (void).cxx_destruct;
- (id)render;
- (id)init;

@end

