//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, TLScene, TLSceneDiscountInfo;

@interface TLPlumpScene : NSObject
{
    TLScene *_baseScene;
    TLSceneDiscountInfo *_discountInfo;
    NSArray *_feedList;
    NSDictionary *_extendInfo;
}

@property(retain, nonatomic) NSDictionary *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) NSArray *feedList; // @synthesize feedList=_feedList;
@property(retain, nonatomic) TLSceneDiscountInfo *discountInfo; // @synthesize discountInfo=_discountInfo;
@property(retain, nonatomic) TLScene *baseScene; // @synthesize baseScene=_baseScene;
- (void).cxx_destruct;
- (id)copy;
- (id)init;

@end

