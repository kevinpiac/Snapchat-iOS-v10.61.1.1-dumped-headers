//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMdpCommonUIPageInfo;

@interface SCNMdpCommonRequestContext : NSObject
{
    float _importance;
    SCNMdpCommonUIPageInfo *_uiPageInfo;
}

+ (id)RequestContextWithUiPageInfo:(id)arg1 importance:(float)arg2;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) float importance; // @synthesize importance=_importance;
- (id)initWithUiPageInfo:(id)arg1 importance:(float)arg2;
@property(readonly, nonatomic) SCNMdpCommonUIPageInfo *uiPageInfo; // @synthesize uiPageInfo=_uiPageInfo;

@end

