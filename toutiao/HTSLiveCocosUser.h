//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface HTSLiveCocosUser : NSObject
{
    NSNumber *_userID;
    NSString *_userName;
    NSString *_userAvater;
    NSString *_userHonorUrl;
    NSNumber *_honorLevel;
}

@property(retain, nonatomic) NSNumber *honorLevel; // @synthesize honorLevel=_honorLevel;
@property(copy, nonatomic) NSString *userHonorUrl; // @synthesize userHonorUrl=_userHonorUrl;
@property(copy, nonatomic) NSString *userAvater; // @synthesize userAvater=_userAvater;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

@end

