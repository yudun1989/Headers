//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <QQMainProject/NIAttributedLabelDelegate-Protocol.h>

@class NSArray, NSString, TBStoryNIAttrLabel;
@protocol TBStoryInteractiveLikeCellDelegate;

@interface TBStoryInteractiveLikeCell : UITableViewCell <NIAttributedLabelDelegate>
{
    TBStoryNIAttrLabel *_label;
    id <TBStoryInteractiveLikeCellDelegate> _storyLikeDelegate;
    NSArray *_likeList;
}

@property(retain, nonatomic) NSArray *likeList; // @synthesize likeList=_likeList;
@property(nonatomic) __weak id <TBStoryInteractiveLikeCellDelegate> storyLikeDelegate; // @synthesize storyLikeDelegate=_storyLikeDelegate;
- (void).cxx_destruct;
- (void)attributedLabelTouchNothing:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)addLink:(id)arg1;
- (void)refreshWithLikeList:(id)arg1 size:(struct CGSize)arg2 showType:(long long)arg3;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 size:(struct CGSize)arg3 origin:(struct CGPoint)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

