//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol TTVFeedPlayMovie <NSObject>
- (_Bool)cell_isPlayingFinished;
- (_Bool)cell_isPaused;
- (_Bool)cell_isPlaying;
- (void)cell_attachMovieView:(id)arg1;
- (id)cell_detachMovieView;
- (UIView *)cell_movieView;
- (_Bool)cell_isMovieFullScreen;
- (_Bool)cell_isPlayingMovie;
- (_Bool)cell_hasMovieView;

@optional
- (struct CGRect)cell_movieViewFrameRect;
@end

