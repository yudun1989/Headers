//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTTPConnection.h"

@class MultipartFormDataParser, NSFileHandle, NSMutableData, NSString;

@interface KSWLANConnection : HTTPConnection
{
    _Bool _isReceivingFile;
    MultipartFormDataParser *_parser;
    NSString *_receiveFileErrorMessage;
    NSFileHandle *_storeFile;
    NSString *_storeFilePath;
    NSMutableData *_requestBody;
}

@property(retain, nonatomic) NSMutableData *requestBody; // @synthesize requestBody=_requestBody;
@property(nonatomic) _Bool isReceivingFile; // @synthesize isReceivingFile=_isReceivingFile;
@property(retain, nonatomic) NSString *storeFilePath; // @synthesize storeFilePath=_storeFilePath;
@property(retain, nonatomic) NSFileHandle *storeFile; // @synthesize storeFile=_storeFile;
@property(retain, nonatomic) NSString *receiveFileErrorMessage; // @synthesize receiveFileErrorMessage=_receiveFileErrorMessage;
@property(retain, nonatomic) MultipartFormDataParser *parser; // @synthesize parser=_parser;
- (void).cxx_destruct;
- (id)_router;
- (id)_routeForPath:(id)arg1 method:(id)arg2;
- (id)_routeForRequest:(id)arg1;
- (void)processEndOfPartWithHeader:(id)arg1;
- (void)processContent:(id)arg1 WithHeader:(id)arg2;
- (void)processStartOfPartWithHeader:(id)arg1;
- (id)_multipartFormDataFileName:(id)arg1;
- (id)_multipartFormDataPartKey:(id)arg1;
- (void)die;
- (void)finishBody;
- (void)processBodyData:(id)arg1;
- (void)prepareForBodyWithSize:(unsigned long long)arg1;
- (id)httpResponseForMethod:(id)arg1 URI:(id)arg2;
- (_Bool)expectsRequestBodyFromMethod:(id)arg1 atPath:(id)arg2;
- (_Bool)supportsMethod:(id)arg1 atPath:(id)arg2;

@end

