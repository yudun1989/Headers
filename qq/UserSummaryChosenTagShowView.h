//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel;
@protocol ChosenTagShowViewDlegate;

@interface UserSummaryChosenTagShowView : UIView
{
    NSMutableArray *_dataSource;
    int _numPerRow;
    int _width;
    int _height;
    UILabel *_emptyLabel;
    id <ChosenTagShowViewDlegate> _delegate;
}

@property(nonatomic) id <ChosenTagShowViewDlegate> delegate; // @synthesize delegate=_delegate;

@end

