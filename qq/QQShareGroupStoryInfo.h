//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface QQShareGroupStoryInfo : QQModel
{
    NSString *_videoCover;
    NSString *_vid;
    NSString *_storyID;
    unsigned long long _vidTime;
    NSString *_authorUin;
    unsigned long long _index;
}

+ (id)createWithQQStory:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *authorUin; // @synthesize authorUin=_authorUin;
@property(nonatomic) unsigned long long vidTime; // @synthesize vidTime=_vidTime;
@property(retain, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *videoCover; // @synthesize videoCover=_videoCover;
- (void)dealloc;

@end

