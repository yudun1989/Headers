//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AliDetaiIconView, NSString;

@interface AliDetailMainVideoRecommendView : UIView
{
    NSString *_eventToken;
    NSString *_itemId;
    NSString *_sellerId;
    NSString *_recommendUrl;
    AliDetaiIconView *_recommendButton;
}

@property(retain, nonatomic) AliDetaiIconView *recommendButton; // @synthesize recommendButton=_recommendButton;
@property(copy, nonatomic) NSString *recommendUrl; // @synthesize recommendUrl=_recommendUrl;
@property(copy, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
- (void).cxx_destruct;
- (void)showRecommend:(id)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

