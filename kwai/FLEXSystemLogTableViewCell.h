//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FLEXSystemLogMessage, NSAttributedString, NSString, UILabel;

@interface FLEXSystemLogTableViewCell : UITableViewCell
{
    FLEXSystemLogMessage *_logMessage;
    NSString *_highlightedText;
    UILabel *_logMessageLabel;
    NSAttributedString *_logMessageAttributedText;
}

+ (id)logTimeStringFromDate:(id)arg1;
+ (double)preferredHeightForLogMessage:(id)arg1 inWidth:(double)arg2;
+ (id)displayedTextForLogMessage:(id)arg1;
+ (id)attributedTextForLogMessage:(id)arg1 highlightedText:(id)arg2;
@property(retain, nonatomic) NSAttributedString *logMessageAttributedText; // @synthesize logMessageAttributedText=_logMessageAttributedText;
@property(retain, nonatomic) UILabel *logMessageLabel; // @synthesize logMessageLabel=_logMessageLabel;
@property(copy, nonatomic) NSString *highlightedText; // @synthesize highlightedText=_highlightedText;
@property(retain, nonatomic) FLEXSystemLogMessage *logMessage; // @synthesize logMessage=_logMessage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

