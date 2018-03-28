//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FRImageInfoModel, NSNumber, NSString;

@interface TTRepostOriginShortVideoOriginalData : NSObject
{
    _Bool _isDeleted;
    NSString *_shortVideoID;
    NSString *_title;
    FRImageInfoModel *_thumbImage;
    NSString *_userID;
    NSString *_userName;
    NSString *_userAvatar;
    NSNumber *_showOrigin;
    NSString *_showTips;
}

@property(copy, nonatomic) NSString *showTips; // @synthesize showTips=_showTips;
@property(retain, nonatomic) NSNumber *showOrigin; // @synthesize showOrigin=_showOrigin;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(copy, nonatomic) NSString *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) FRImageInfoModel *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *shortVideoID; // @synthesize shortVideoID=_shortVideoID;
- (void).cxx_destruct;
- (id)initWithShortVideoModel:(id)arg1;
- (id)initWithShortVideoOriginalData:(id)arg1;

@end
