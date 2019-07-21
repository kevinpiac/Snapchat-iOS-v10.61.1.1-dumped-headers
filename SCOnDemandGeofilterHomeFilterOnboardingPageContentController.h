//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIImageView, UILabel, UIView;
@protocol SCOnDemandGeofilterSessionProtocol;

@interface SCOnDemandGeofilterHomeFilterOnboardingPageContentController : UIViewController
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_heroImageView;
    UIView *subView;
    unsigned long long _pageIndex;
    NSString *_txtTitle;
    NSString *_subTitle;
    NSString *_bitmojiTemplateId;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
}

- (void).cxx_destruct;
@property(retain) NSString *bitmojiTemplateId; // @synthesize bitmojiTemplateId=_bitmojiTemplateId;
@property(retain, nonatomic) id <SCOnDemandGeofilterSessionProtocol> geofilterSession; // @synthesize geofilterSession=_geofilterSession;
- (id)initWithGeofilterSession:(id)arg1;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain) NSString *txtTitle; // @synthesize txtTitle=_txtTitle;
- (void)viewDidLoad;

@end

