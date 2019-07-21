//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SIGLabel, UIImageView;
@protocol SIGSelectBarItem;

@interface SIGSelectBarItemView : UIView
{
    UIView *_backgroundView;
    UIImageView *_imageView;
    SIGLabel *_commaLabel;
    SIGLabel *_textLabel;
    unsigned long long _type;
    id <SIGSelectBarItem> _item;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasComma;
- (id)initWithItem:(id)arg1 title:(id)arg2 type:(unsigned long long)arg3;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) id <SIGSelectBarItem> item; // @synthesize item=_item;

@end

