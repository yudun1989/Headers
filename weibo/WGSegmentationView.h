//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDWGView.h"

@class UIImageView;

@interface WGSegmentationView : SDWGView
{
    _Bool _top;
    _Bool _bottom;
    UIImageView *_topLine;
    UIImageView *_bottomLine;
}

@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) _Bool bottom; // @synthesize bottom=_bottom;
@property(nonatomic) _Bool top; // @synthesize top=_top;
- (void).cxx_destruct;
- (void)layoutLine;
- (void)setupLine;
- (id)initWithTop:(_Bool)arg1 Bottom:(_Bool)arg2;

@end

