//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCPalettedColorPickerView, UIColor;

@protocol SCPalettedColorPickerViewDelegate <NSObject>
- (void)palettedColorPickerView:(SCPalettedColorPickerView *)arg1 didChangeColor:(UIColor *)arg2;
- (void)palettedColorPickerView:(SCPalettedColorPickerView *)arg1 didTogglePaletteToType:(unsigned long long)arg2 selectedColor:(UIColor *)arg3;
@end

