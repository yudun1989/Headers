//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIImage;

@interface AWEProfileEditViewModel : NSObject
{
    _Bool _ifDefaultID;
    _Bool _isBindedWeibo;
    UIImage *_avatarImage;
    NSArray *_avatarURL;
    NSString *_nickname;
    NSString *_uniqueID;
    NSString *_gender;
    NSString *_birthDate;
    NSString *_signature;
    NSString *_avatarURI;
    long long _genderType;
    NSString *_weiboName;
    NSString *_weiboSchema;
    NSString *_weiboURL;
    NSString *_schoolName;
    NSString *_schoolPoiId;
}

@property(copy, nonatomic) NSString *schoolPoiId; // @synthesize schoolPoiId=_schoolPoiId;
@property(copy, nonatomic) NSString *schoolName; // @synthesize schoolName=_schoolName;
@property(copy, nonatomic) NSString *weiboURL; // @synthesize weiboURL=_weiboURL;
@property(copy, nonatomic) NSString *weiboSchema; // @synthesize weiboSchema=_weiboSchema;
@property(copy, nonatomic) NSString *weiboName; // @synthesize weiboName=_weiboName;
@property(nonatomic) _Bool isBindedWeibo; // @synthesize isBindedWeibo=_isBindedWeibo;
@property(nonatomic) _Bool ifDefaultID; // @synthesize ifDefaultID=_ifDefaultID;
@property(nonatomic) long long genderType; // @synthesize genderType=_genderType;
@property(retain, nonatomic) NSString *avatarURI; // @synthesize avatarURI=_avatarURI;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *birthDate; // @synthesize birthDate=_birthDate;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSArray *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
- (void).cxx_destruct;
- (void)refreshWithUser:(id)arg1;

@end
