//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTHTTPJSONResponseSerializerBase.h"

@interface TTDefaultJSONResponseSerializer : TTHTTPJSONResponseSerializerBase
{
    _Bool _enableRequestIDReport;
}

+ (id)serializer;
@property(nonatomic) _Bool enableRequestIDReport; // @synthesize enableRequestIDReport=_enableRequestIDReport;
- (void)error:(id *)arg1 addHTTPStatusCodeWithResponse:(id)arg2;
- (id)responseObjectForResponse:(id)arg1 jsonObj:(id)arg2 responseError:(id)arg3 resultError:(id *)arg4;
- (id)init;

@end

