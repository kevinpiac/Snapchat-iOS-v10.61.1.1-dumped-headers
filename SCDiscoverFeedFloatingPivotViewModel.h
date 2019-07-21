//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCDynamicLayoutThemeConfiguration, SCNetworkImage;

@interface SCDiscoverFeedFloatingPivotViewModel : NSObject <NSCopying>
{
    SCNetworkImage *_icon;
    NSArray *_feedTypes;
    NSString *_sectionTitle;
    NSString *_pageIdentifier;
    SCDynamicLayoutThemeConfiguration *_themeConfiguration;
    NSArray *_prefetchMetadata;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *feedTypes; // @synthesize feedTypes=_feedTypes;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCNetworkImage *icon; // @synthesize icon=_icon;
- (id)initWithIcon:(id)arg1 feedTypes:(id)arg2 sectionTitle:(id)arg3 pageIdentifier:(id)arg4 themeConfiguration:(id)arg5 prefetchMetadata:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(readonly, copy, nonatomic) NSArray *prefetchMetadata; // @synthesize prefetchMetadata=_prefetchMetadata;
@property(readonly, copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(readonly, copy, nonatomic) SCDynamicLayoutThemeConfiguration *themeConfiguration; // @synthesize themeConfiguration=_themeConfiguration;

@end
