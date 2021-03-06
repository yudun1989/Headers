//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TightTableViewCellModel.h>

@class NSAttributedString, NSString, UIImage;

@interface NearbyUserSummaryCellModel : TightTableViewCellModel
{
    _Bool _bInputEnabled;
    _Bool _bEditing;
    NSString *_iconName;
    NSString *_strTitle;
    NSString *_strContent;
    NSAttributedString *_attstrContent;
    NSString *_strPlaceholder;
    UIImage *_professionIcon;
    NSString *_strProfessionType;
    _Bool _showProfessionIcon;
    _Bool _needErrorWarning;
    long long _maxLength;
    NSString *_accessibilityLabel;
    long long _selectionStyle;
    long long _accessoryType;
    _Bool _isPlaceholderCell;
    _Bool _isNewNearbyCell;
    int _xo;
}

- (void).cxx_destruct;
- (double)heightForRow;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityLabel; // @dynamic accessibilityLabel;
@property(nonatomic) long long accessoryType; // @dynamic accessoryType;
@property(copy, nonatomic) NSAttributedString *attstrContent; // @dynamic attstrContent;
@property(nonatomic) _Bool bEditing; // @dynamic bEditing;
@property(nonatomic) _Bool bInputEnabled; // @dynamic bInputEnabled;
@property(copy, nonatomic) NSString *iconName; // @dynamic iconName;
@property(nonatomic) _Bool isNewNearbyCell; // @dynamic isNewNearbyCell;
@property(nonatomic) _Bool isPlaceholderCell; // @dynamic isPlaceholderCell;
@property(nonatomic) long long maxLength; // @dynamic maxLength;
@property(nonatomic) _Bool needErrorWarning; // @dynamic needErrorWarning;
@property(retain, nonatomic) UIImage *professionIcon; // @dynamic professionIcon;
@property(nonatomic) long long selectionStyle; // @dynamic selectionStyle;
@property(nonatomic) _Bool showProfessionIcon; // @dynamic showProfessionIcon;
@property(copy, nonatomic) NSString *strContent; // @dynamic strContent;
@property(copy, nonatomic) NSString *strPlaceholder; // @dynamic strPlaceholder;
@property(copy, nonatomic) NSString *strProfessionType; // @dynamic strProfessionType;
@property(copy, nonatomic) NSString *strTitle; // @dynamic strTitle;

@end

