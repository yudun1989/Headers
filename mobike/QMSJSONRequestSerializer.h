//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMSHTTPRequestSerializer.h"

@interface QMSJSONRequestSerializer : QMSHTTPRequestSerializer
{
    unsigned long long _writingOptions;
}

+ (id)serializerWithWritingOptions:(unsigned long long)arg1;
+ (id)serializer;
@property(nonatomic) unsigned long long writingOptions; // @synthesize writingOptions=_writingOptions;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;

@end

