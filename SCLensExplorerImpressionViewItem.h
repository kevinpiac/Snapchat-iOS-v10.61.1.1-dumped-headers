//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpressionViewItem-Protocol.h"

@class NSDate;
@protocol SCImpressionItem;

@interface SCLensExplorerImpressionViewItem : NSObject <SCImpressionViewItem>
{
    id <SCImpressionItem> _impressionItem;
    struct CGRect _frame;
    NSDate *_date;
    _Bool _shouldAlwaysTriggerImpression;
}

+ (id)_createWithLensChallengesViewModel:(id)arg1 frame:(struct CGRect)arg2 date:(id)arg3;
+ (id)_createWithLensExplorerViewModel:(id)arg1 frame:(struct CGRect)arg2 date:(id)arg3;
+ (id)createWithViewModel:(id)arg1 frame:(struct CGRect)arg2 date:(id)arg3;
- (void).cxx_destruct;
- (id)buildWithImpressionItem:(id)arg1;
- (id)date;
- (struct CGRect)frame;
- (id)impressionItem;
- (id)initWithImpressionItem:(id)arg1 frame:(struct CGRect)arg2 date:(id)arg3 shouldAlwaysTriggerImpression:(_Bool)arg4;
- (_Bool)shouldAlwaysTriggerImpression;

@end

