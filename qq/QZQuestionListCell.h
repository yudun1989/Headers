//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage;

@interface QZQuestionListCell : UITableViewCell
{
    long long _srcIndex;
    NSString *_text;
    UIImage *_bgImage;
    int _xo;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)reloadAppearance;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIImage *bgImage; // @dynamic bgImage;
@property(nonatomic) long long srcIndex; // @dynamic srcIndex;
@property(retain, nonatomic) NSString *text; // @dynamic text;

@end

