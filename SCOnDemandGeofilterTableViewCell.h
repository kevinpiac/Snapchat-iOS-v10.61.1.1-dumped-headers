//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCLoadingIndicatorView, SCOnDemandGeofilterTableViewCellViewModel, UIImageView, UILabel, UIView;
@protocol SCOnDemandGeofilterSessionProtocol;

@interface SCOnDemandGeofilterTableViewCell : UITableViewCell
{
    UILabel *_geofilterStatus;
    UILabel *_infoLabel;
    UIView *_separatorLine;
    UIImageView *_thumbnail;
    UIView *_dot;
    UIView *_contentContainer;
    SCOnDemandGeofilterTableViewCellViewModel *_vm;
    SCLoadingIndicatorView *_activityIndicator;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
}

+ (id)mutableAttributedString:(id)arg1 font:(id)arg2 fontColor:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SCOnDemandGeofilterSessionProtocol> geofilterSession; // @synthesize geofilterSession=_geofilterSession;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMasonryViews;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupWithViewModel:(id)arg1;

@end
