//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBSVideoShareData : NSObject
{
    NSString *_shareUrl;
    NSString *_imageUrl;
    NSString *_businessId;
    NSString *_des;
    NSString *_title;
    NSString *_userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *des; // @synthesize des=_des;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
- (void).cxx_destruct;
- (_Bool)isInvaild;

@end

