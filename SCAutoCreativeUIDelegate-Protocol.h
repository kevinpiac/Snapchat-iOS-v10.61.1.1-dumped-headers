//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGeoFilter, UIView;
@protocol SCAutoCreativeManager, SCAutoCreativeMediaDelegate;

@protocol SCAutoCreativeUIDelegate <NSObject>
- (void)autoCreativeManager:(id <SCAutoCreativeManager>)arg1 drawUIForCreativeFilter:(SCGeoFilter *)arg2;
- (void)autoCreativeManagerDismissUI:(id <SCAutoCreativeManager>)arg1;
- (void)configureWithView:(UIView *)arg1;
@property(nonatomic) __weak id <SCAutoCreativeMediaDelegate> mediaDelegate;
@end

