//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCAdShake2ReportLogger : NSObject
{
    NSString *_lastViewedAdId;
    NSString *_lastViewedLineItemId;
    NSString *_lastViewedAdCreativeEndpoint;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *lastViewedAdCreativeEndpoint; // @synthesize lastViewedAdCreativeEndpoint=_lastViewedAdCreativeEndpoint;
@property(readonly, copy, nonatomic) NSString *lastViewedAdId; // @synthesize lastViewedAdId=_lastViewedAdId;
@property(readonly, copy, nonatomic) NSString *lastViewedLineItemId; // @synthesize lastViewedLineItemId=_lastViewedLineItemId;
- (void)updateAdId:(id)arg1 lineItemId:(id)arg2 creativeEndpoint:(id)arg3;

@end

