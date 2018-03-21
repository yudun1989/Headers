//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, TBEmoticon, TBEmoticonPreviewView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol TBEmoticonGridViewDelegate;

@interface TBEmoticonGridView : UIView
{
    long long _rowCount;
    long long _columnCount;
    struct CGSize _emoticonThumbSize;
    struct CGSize _emoticonPreviewSize;
    TBEmoticon *_deleteEmoticon;
    TBEmoticon *_confirmEmoticon;
    NSArray *_emoticons;
    UIView *_gridContainerView;
    NSMutableArray *_emoticonViews;
    _Bool _bShowTitle;
    TBEmoticonPreviewView *_emoticonPreviewView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    id <TBEmoticonGridViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TBEmoticonGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize emoticonPreviewSize; // @synthesize emoticonPreviewSize=_emoticonPreviewSize;
@property(nonatomic) struct CGSize emoticonThumbSize; // @synthesize emoticonThumbSize=_emoticonThumbSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithEmoticons:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 deleteEmoticon:(id)arg4 confirmEmoticon:(id)arg5 showTitle:(_Bool)arg6;
- (id)initWithEmoticons:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3;
- (id)initWithEmoticons:(id)arg1;
- (void)dealloc;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)_previewEmoticonAtPoint:(struct CGPoint)arg1;
- (id)_emoticonAtPoint:(struct CGPoint)arg1;
- (struct CGRect)_frameForEmoticonViewAtIndex:(long long)arg1;

@end

