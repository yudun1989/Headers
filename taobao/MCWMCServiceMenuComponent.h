//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCInputMenuPresenter.h"

@class MCUUnreadItemView;

@interface MCWMCServiceMenuComponent : MCInputMenuPresenter
{
    MCUUnreadItemView *_redDotView;
}

@property(retain, nonatomic) MCUUnreadItemView *redDotView; // @synthesize redDotView=_redDotView;
- (void).cxx_destruct;
- (void)updateRedDot:(_Bool)arg1;
- (void)onDataChanged;
- (void)replaceSwitchView;
- (id)initWithConfig:(id)arg1 identifier:(id)arg2 bizKey:(id)arg3;

@end

