//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class WBComment, WBTimelineAttributedTextView;

@interface WBRollingUnionAreaTableViewCell : WBTableViewCell
{
    WBTimelineAttributedTextView *contentTextView;
    WBComment *_comment;
}

+ (id)textWithAuthorNameOfComment:(id)arg1;
+ (double)heightOfCell:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) WBComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

