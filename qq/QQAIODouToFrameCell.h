//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQFaceCell.h>

@class UIActivityIndicatorView, UIImageView;

@interface QQAIODouToFrameCell : QQFaceCell
{
    UIImageView *_storeImageView;
    UIActivityIndicatorView *_indicator;
    unsigned long long _cellIndex;
    unsigned long long _source;
}

@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIImageView *storeImageView; // @synthesize storeImageView=_storeImageView;
- (void).cxx_destruct;
- (void)loadCellDataWithEmojiInfo:(id)arg1;
- (_Bool)localHasData;
- (void)dealloc;

@end

