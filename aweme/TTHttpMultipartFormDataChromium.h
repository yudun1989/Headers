//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTHttpMultipartFormData.h"

@class NSMutableArray, NSString;

@interface TTHttpMultipartFormDataChromium : TTHttpMultipartFormData
{
    _Bool _isFinal;
    NSMutableArray *_HTTPBodyParts;
    unsigned long long _stringEncoding;
    NSString *_boundary;
}

@property(nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) NSMutableArray *HTTPBodyParts; // @synthesize HTTPBodyParts=_HTTPBodyParts;
- (void).cxx_destruct;
- (void)appendPartWithHeaders:(id)arg1 body:(id)arg2;
- (id)getContentType;
- (id)finalFormDataWithHttpRequest:(id)arg1;
- (void)appendPartWithFormData:(id)arg1 name:(id)arg2;
- (void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
- (id)init;

@end

