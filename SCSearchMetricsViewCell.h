//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray;
@protocol SCSearchMetricsViewCellDelegate;

@interface SCSearchMetricsViewCell : UITableViewCell
{
    NSMutableArray *_subviews;
    long long _selectedMetric;
    id <SCSearchMetricsViewCellDelegate> _delegate;
    NSArray *_metrics;
    NSArray *_images;
    NSArray *_parameters;
}

+ (id)reusableIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SCSearchMetricsViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (id)initWithMetrics:(id)arg1 withImages:(id)arg2 withParameters:(id)arg3 withStyle:(long long)arg4 forSelected:(long long)arg5 reuseIdentifier:(id)arg6;
- (void)layoutSubviews;
@property(copy, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
- (void)tap:(id)arg1;

@end

