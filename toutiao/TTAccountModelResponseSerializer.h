//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTAccountJSONResponseSerializer.h"

#import "TTResponseModelResponseSerializerProtocol-Protocol.h"

@class NSString;

@interface TTAccountModelResponseSerializer : TTAccountJSONResponseSerializer <TTResponseModelResponseSerializerProtocol>
{
}

+ (id)serializer;
- (id)responseObjectForResponse:(id)arg1 jsonObj:(id)arg2 requestModel:(id)arg3 responseError:(id)arg4 resultError:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

