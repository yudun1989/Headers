//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString, UIScrollView;

@protocol DiscussGroupListViewDelegate <NSObject>

@optional
- (void)discussGroupListViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)discussGroupListViewDidScroll:(UIScrollView *)arg1;
- (void)discussGroupListSelected:(NSString *)arg1;
- (void)discussGroupListOnAddClick;
@end

