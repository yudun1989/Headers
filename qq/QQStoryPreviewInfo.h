//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQStoryPreviewInfo : NSObject
{
    int _videoType;
    NSString *_vid;
    NSString *_unionID;
}

@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (_Bool)isEqualPreviewInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

