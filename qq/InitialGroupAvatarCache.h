//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIImage;

@interface InitialGroupAvatarCache : NSObject
{
    NSString *_groupCode;
    NSArray *_infoStatus;
    NSArray *_avatarStatus;
    UIImage *_avatarImage;
    NSArray *_mergedUrls;
    NSArray *_uins;
}

@property(copy, nonatomic) NSArray *uins; // @synthesize uins=_uins;
@property(copy, nonatomic) NSArray *mergedUrls; // @synthesize mergedUrls=_mergedUrls;
@property(retain) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(copy) NSArray *avatarStatus; // @synthesize avatarStatus=_avatarStatus;
@property(copy) NSArray *infoStatus; // @synthesize infoStatus=_infoStatus;
@property(readonly, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
- (void).cxx_destruct;
- (id)description;
- (id)initWithGroupCode:(id)arg1;

@end

