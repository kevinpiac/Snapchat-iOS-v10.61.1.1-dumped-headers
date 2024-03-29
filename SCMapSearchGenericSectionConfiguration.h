//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchSimpleQueryResultSectionConfiguration.h"

@class NSString, SCMapSearchGenericCellViewModelProvider;

@interface SCMapSearchGenericSectionConfiguration : SCSearchSimpleQueryResultSectionConfiguration
{
    NSString *_headline;
    SCMapSearchGenericCellViewModelProvider *_viewModelProvider;
    unsigned long long _viewMoreMinimumThreshold;
    unsigned long long _viewMoreMaximumThreshold;
    unsigned long long _viewMoreIncrementThreshold;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *headline; // @synthesize headline=_headline;
- (id)initWithQuery:(id)arg1 headline:(id)arg2 viewModelProvider:(id)arg3 viewMoreMinimumThreshold:(unsigned long long)arg4 viewMoreMaximumThreshold:(unsigned long long)arg5 viewMoreIncrementThreshold:(unsigned long long)arg6;
@property(readonly, nonatomic) SCMapSearchGenericCellViewModelProvider *viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
@property(readonly, nonatomic) unsigned long long viewMoreIncrementThreshold; // @synthesize viewMoreIncrementThreshold=_viewMoreIncrementThreshold;
@property(readonly, nonatomic) unsigned long long viewMoreMaximumThreshold; // @synthesize viewMoreMaximumThreshold=_viewMoreMaximumThreshold;
@property(readonly, nonatomic) unsigned long long viewMoreMinimumThreshold; // @synthesize viewMoreMinimumThreshold=_viewMoreMinimumThreshold;

@end

