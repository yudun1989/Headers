//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TBShareTaoPasswordContent : NSObject
{
    NSString *_passwordKey;
    NSDictionary *_passwordInfo;
    unsigned long long _keyType;
}

@property(nonatomic) unsigned long long keyType; // @synthesize keyType=_keyType;
@property(retain, nonatomic) NSDictionary *passwordInfo; // @synthesize passwordInfo=_passwordInfo;
@property(retain, nonatomic) NSString *passwordKey; // @synthesize passwordKey=_passwordKey;
- (void).cxx_destruct;

@end
