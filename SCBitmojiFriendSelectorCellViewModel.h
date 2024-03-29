//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, UIColor, UIImage;

@interface SCBitmojiFriendSelectorCellViewModel : NSObject <NSCopying>
{
    NSString *_title;
    UIColor *_textColor;
    UIImage *_icon;
    SCActionModel *_actionModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)initWithTitle:(id)arg1 textColor:(id)arg2 icon:(id)arg3 actionModel:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

