//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray, NSString, UIImage, UIImageView, UILabel;

@interface SCProductCheckoutViewCell : UITableViewCell
{
    UILabel *_cellLabelTop;
    NSMutableArray *_cellLabelMultiline;
    NSArray *_labelItems;
    _Bool _singleLine;
    UIImageView *_labelIconView;
    UIImageView *_errorIconView;
    _Bool _hasError;
    _Bool _isSingleLine;
    NSString *_labelInfo;
    UIImage *_labelIcon;
}

- (void).cxx_destruct;
- (id)_getMultiLineLabelAtLineIndex:(unsigned long long)arg1;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isSingleLine; // @synthesize isSingleLine=_isSingleLine;
@property(retain, nonatomic) UIImage *labelIcon; // @synthesize labelIcon=_labelIcon;
@property(retain, nonatomic) NSString *labelInfo; // @synthesize labelInfo=_labelInfo;
@property(retain, nonatomic) NSArray *labelItems; // @synthesize labelItems=_labelItems;
- (void)setupLabels;

@end

