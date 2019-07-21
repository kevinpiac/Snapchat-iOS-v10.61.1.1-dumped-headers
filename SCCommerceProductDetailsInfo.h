//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCCommerceProductDetailsInfo : NSObject
{
    NSString *_title;
    NSString *_seller;
    NSString *_price;
    NSString *_strikethroughPrice;
    NSArray *_bitmojis;
    NSArray *_categories;
    NSString *_htmlDescriptionString;
    NSArray *_colors;
    long long _selectedColorIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *bitmojis; // @synthesize bitmojis=_bitmojis;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSString *htmlDescriptionString; // @synthesize htmlDescriptionString=_htmlDescriptionString;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) long long selectedColorIndex; // @synthesize selectedColorIndex=_selectedColorIndex;
@property(retain, nonatomic) NSString *seller; // @synthesize seller=_seller;
@property(retain, nonatomic) NSString *strikethroughPrice; // @synthesize strikethroughPrice=_strikethroughPrice;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

