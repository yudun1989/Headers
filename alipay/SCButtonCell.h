//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton;

@interface SCButtonCell : UITableViewCell
{
    UIButton *_button;
    id _userData;
    CDUnknownBlockType _buttonClickEeventHandler;
}

@property(copy, nonatomic) CDUnknownBlockType buttonClickEeventHandler; // @synthesize buttonClickEeventHandler=_buttonClickEeventHandler;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)onTouchUpInside:(id)arg1;
- (id)addButtonWithTitle:(id)arg1;

@end

