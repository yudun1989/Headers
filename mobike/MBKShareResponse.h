//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKShareResponse : NSObject
{
    long long _sharePlatformType;
    long long _code;
    NSString *_message;
}

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) long long sharePlatformType; // @synthesize sharePlatformType=_sharePlatformType;
- (void).cxx_destruct;

@end

