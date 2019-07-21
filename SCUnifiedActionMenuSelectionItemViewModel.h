//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel;

@interface SCUnifiedActionMenuSelectionItemViewModel : NSObject <NSCopying>
{
    _Bool _isSelected;
    NSString *_label;
    SCActionModel *_actionModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithLabel:(id)arg1 isSelected:(_Bool)arg2 actionModel:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;

@end
