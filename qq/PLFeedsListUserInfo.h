//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PLFeedsListUserInfo : NSObject
{
    unsigned int _age;
    unsigned long long _uid;
    NSString *_headImgUrl;
    NSString *_bigVImgUrl;
    NSString *_anchorName;
    unsigned long long _friendType;
    unsigned long long _gender;
}

@property(nonatomic) unsigned int age; // @synthesize age=_age;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(nonatomic) unsigned long long friendType; // @synthesize friendType=_friendType;
@property(copy, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
@property(copy, nonatomic) NSString *bigVImgUrl; // @synthesize bigVImgUrl=_bigVImgUrl;
@property(copy, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

