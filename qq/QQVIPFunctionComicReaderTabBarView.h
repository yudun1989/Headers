//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol QQVIPFunctionComicReaderTabBarViewDelegate;

@interface QQVIPFunctionComicReaderTabBarView : UIView
{
    NSArray *_items;
    unsigned long long _selectedIndex;
    id <QQVIPFunctionComicReaderTabBarViewDelegate> _delegate;
    int _xo;
    long long _mode;
}

@property long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setItems:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) __weak id <QQVIPFunctionComicReaderTabBarViewDelegate> delegate; // @dynamic delegate;
@property(nonatomic) unsigned long long selectedIndex; // @dynamic selectedIndex;

@end

