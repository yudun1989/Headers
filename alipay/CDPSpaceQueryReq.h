//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CDPSpaceQueryReq : NSObject
{
    NSArray *_spaceCodeList;
    NSString *_userId;
    NSString *_packageName;
    NSDictionary *_extInfo;
}

+ (Class)extInfoElementClass;
+ (Class)spaceCodeListElementClass;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSArray *spaceCodeList; // @synthesize spaceCodeList=_spaceCodeList;
- (void).cxx_destruct;

@end

