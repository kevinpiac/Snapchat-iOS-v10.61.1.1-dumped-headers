//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIPageViewControllerDataSource-Protocol.h"

@class NSArray, NSString, SCOnDemandGeofilterPillButton, SOJUUnlockablesOndemandTemplateCategory, UIPageControl, UIPageViewController;
@protocol SCOnDemandGeofilterSessionProtocol;

@interface SCOnDemandGeofilterHomeFilterOnboardingViewController : UIViewController <UIPageViewControllerDataSource>
{
    NSArray *_titles;
    NSArray *_subTitles;
    NSArray *_bitmojiTemplateList;
    UIPageControl *_pageControl;
    SCOnDemandGeofilterPillButton *_getStartedButton;
    SOJUUnlockablesOndemandTemplateCategory *_category;
    UIPageViewController *_pageViewController;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCOnDemandGeofilterSessionProtocol> geofilterSession; // @synthesize geofilterSession=_geofilterSession;
- (void)getStartedButtonPressed;
- (id)initWithTemplateCategory:(id)arg1 geofilterSession:(id)arg2;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)viewControllerAtIndex:(unsigned long long)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

