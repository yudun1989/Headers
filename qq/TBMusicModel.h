//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBStoryMusicModel;

@interface TBMusicModel : NSObject
{
    TBStoryMusicModel *_storyMusicModel;
    id _playDelegate;
    id _showDelegate;
}

@property(nonatomic) __weak id showDelegate; // @synthesize showDelegate=_showDelegate;
@property(nonatomic) __weak id playDelegate; // @synthesize playDelegate=_playDelegate;
@property(retain, nonatomic) TBStoryMusicModel *storyMusicModel; // @synthesize storyMusicModel=_storyMusicModel;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

