//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KOStoryProfile : NSObject
{
    NSString *_nickName;
    NSString *_profileImageURL;
    NSString *_thumbnailURL;
    NSString *_bgImageURL;
    NSString *_birthday;
    long long _birthdayType;
    NSString *_permalink;
}

@property(readonly, nonatomic) NSString *permalink; // @synthesize permalink=_permalink;
@property(readonly, nonatomic) long long birthdayType; // @synthesize birthdayType=_birthdayType;
@property(readonly, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(readonly, nonatomic) NSString *bgImageURL; // @synthesize bgImageURL=_bgImageURL;
@property(readonly, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(readonly, nonatomic) NSString *profileImageURL; // @synthesize profileImageURL=_profileImageURL;
@property(readonly, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNickname:(id)arg1 profileImageURL:(id)arg2 thumbnailURL:(id)arg3 bgImageURL:(id)arg4 birthday:(id)arg5 birthdayType:(long long)arg6 permalink:(id)arg7;

@end

